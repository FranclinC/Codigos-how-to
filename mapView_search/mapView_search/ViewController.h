//
//  ViewController.h
//  mapView_search
//
//  Created by Franclin Cabral on 21/05/15.
//  Copyright (c) 2015 Franclin Cabral. All rights reserved.
//

#import <UIKit/UIKit.h>
@import MapKit;

@interface ViewController : UIViewController <MKMapViewDelegate, UISearchBarDelegate>

@property (strong, nonatomic) IBOutlet MKMapView *mapView;
@property (strong, nonatomic) IBOutlet UISearchBar *searchBar;


@property (strong, nonatomic) MKPointAnnotation * annotation;


@end

